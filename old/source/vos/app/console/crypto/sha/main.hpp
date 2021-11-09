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
///   Date: 10/9/2020
///////////////////////////////////////////////////////////////////////
#ifndef VOS_APP_CONSOLE_CRYPTO_SHA_MAIN_HPP
#define VOS_APP_CONSOLE_CRYPTO_SHA_MAIN_HPP

#include "vos/app/console/crypto/sha/main_opt.hpp"
/*#include "vos/crypto/hash/openssl/md5.hpp"
#include "vos/crypto/hash/openssl/sha1.hpp"
#include "vos/crypto/hash/openssl/sha256.hpp"
#include "vos/crypto/hash/openssl/sha512.hpp"
*/
namespace vos {
namespace app {
namespace console {
namespace crypto {
namespace sha {

/// class maint
template <class TExtends = main_opt, class TImplements = typename TExtends::implements>
class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives; 
    
    typedef typename extends::file_t file_t;
    typedef typename extends::string_t string_t;
    typedef typename extends::char_t char_t;

    /// constructors / destructor
    maint()/*: md5_(0), sha1_(0), sha256_(0), sha512_(0)*/ {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy) {
        throw exception(exception_unexpected);
    }

protected:
    /*/// md5 / sha...
    vos::crypto::hash::md5& (derives::*md5_)() const;
    virtual vos::crypto::hash::md5& md5() const {
        if ((md5_)) {
            return (this->*md5_)();
        }
        return openssl_md5();
    }
    vos::crypto::hash::sha1& (derives::*sha1_)() const;
    virtual vos::crypto::hash::sha1& sha1() const {
        if ((sha1_)) {
            return (this->*sha1_)();
        }
        return openssl_sha1();
    }
    vos::crypto::hash::sha256& (derives::*sha256_)() const;
    virtual vos::crypto::hash::sha256& sha256() const {
        if ((sha256_)) {
            return (this->*sha256_)();
        }
        return openssl_sha256();
    }
    vos::crypto::hash::sha512& (derives::*sha512_)() const;
    virtual vos::crypto::hash::sha512& sha512() const {
        if ((sha512_)) {
            return (this->*sha512_)();
        }
        return openssl_sha512();
    }

    /// openssl_md5 / openssl_sha...
    virtual vos::crypto::hash::md5& openssl_md5() const {
        return (vos::crypto::hash::md5&)openssl_md5_;
    }
    virtual vos::crypto::hash::sha1& openssl_sha1() const {
        return (vos::crypto::hash::sha1&)openssl_sha1_;
    }
    virtual vos::crypto::hash::sha256& openssl_sha256() const {
        return (vos::crypto::hash::sha256&)openssl_sha256_;
    }
    virtual vos::crypto::hash::sha512& openssl_sha512() const {
        return (vos::crypto::hash::sha512&)openssl_sha512_;
    }*/

protected:
/*    vos::crypto::hash::openssl::md5 openssl_md5_;
    vos::crypto::hash::openssl::sha1 openssl_sha1_;
    vos::crypto::hash::openssl::sha256 openssl_sha256_;
    vos::crypto::hash::openssl::sha512 openssl_sha512_;
*/
}; /// class maint
typedef maint<> main;

} /// namespace sha
} /// namespace crypto
} /// namespace console
} /// namespace app
} /// namespace vos

#endif /// VOS_APP_CONSOLE_CRYPTO_SHA_MAIN_HPP
