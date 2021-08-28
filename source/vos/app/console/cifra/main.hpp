///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2020 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main.hpp
///
/// Author: $author$
///   Date: 5/1/2020
///////////////////////////////////////////////////////////////////////
#ifndef VOS_APP_CONSOLE_CIFRA_MAIN_HPP
#define VOS_APP_CONSOLE_CIFRA_MAIN_HPP

#include "vos/app/console/cifra/main_opt.hpp"

#if defined(VOS_APP_CONSOLE_CIFRA_MAIN_OPT_EXTENDS_HASH_MAIN)
#include "vos/crypto/hash/openssl/md5.hpp"
#include "vos/crypto/hash/openssl/sha1.hpp"
#include "vos/crypto/hash/openssl/sha256.hpp"
#include "vos/crypto/hash/openssl/sha512.hpp"
#endif /// defined(VOS_APP_CONSOLE_CIFRA_MAIN_OPT_EXTENDS_HASH_MAIN)

namespace vos {
namespace app {
namespace console {
namespace cifra {

/// class maint
template <class TExtends = main_opt, class TImplements = typename TExtends::implements>
class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

#if defined(VOS_APP_CONSOLE_CIFRA_MAIN_OPT_EXTENDS_HASH_MAIN)
    enum { HASHSIZE = vos::crypto::hash::sha512::HASHSIZE };
#endif /// defined(VOS_APP_CONSOLE_CIFRA_MAIN_OPT_EXTENDS_HASH_MAIN)
    typedef typename extends::file_t file_t;
    typedef typename extends::string_t string_t;
    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };

    /// constructor / destructor
    maint() {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy) {
        throw vos::exception(exception_unexpected);
    }
public:

#if defined(VOS_APP_CONSOLE_CIFRA_MAIN_OPT_EXTENDS_HASH_MAIN)
protected:
    /// md5 / sha...
    virtual vos::crypto::hash::md5& md5() const {
        return (vos::crypto::hash::md5&)openssl_md5_;
    }
    virtual vos::crypto::hash::sha1& sha1() const {
        return (vos::crypto::hash::sha1&)openssl_sha1_;
    }
    virtual vos::crypto::hash::sha256& sha256() const {
        return (vos::crypto::hash::sha256&)openssl_sha256_;
    }
    virtual vos::crypto::hash::sha512& sha512() const {
        return (vos::crypto::hash::sha512&)openssl_sha512_;
    }

protected:
    vos::crypto::hash::openssl::md5 openssl_md5_;
    vos::crypto::hash::openssl::sha1 openssl_sha1_;
    vos::crypto::hash::openssl::sha256 openssl_sha256_;
    vos::crypto::hash::openssl::sha512 openssl_sha512_;
#endif /// defined(VOS_APP_CONSOLE_CIFRA_MAIN_OPT_EXTENDS_HASH_MAIN)
}; /// class maint
typedef maint<> main;

} /// namespace cifra
} /// namespace console
} /// namespace app
} /// namespace vos

#endif /// ndef VOS_APP_CONSOLE_CIFRA_MAIN_HPP 
