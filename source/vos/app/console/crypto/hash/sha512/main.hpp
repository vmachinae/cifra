///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2021 $organization$
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
///   Date: 2/8/2021
///////////////////////////////////////////////////////////////////////
#ifndef VOS_APP_CONSOLE_CRYPTO_HASH_SHA512_MAIN_HPP
#define VOS_APP_CONSOLE_CRYPTO_HASH_SHA512_MAIN_HPP

#include "vos/app/console/crypto/hash/sha512/main_opt.hpp"
#include "vos/crypto/hash/openssl/sha512.hpp"

namespace vos {
namespace app {
namespace console {
namespace crypto {
namespace hash {
namespace sha512 {

/// class maint
template 
<class TExtends = main_opt, 
 class TImplements = typename TExtends::implements>

class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;
    typedef typename extends::string_t string_t;
    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };

    /// constructor / destructor
    maint(): sha512_algorithm_(0) {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    /// sha512...
    vos::crypto::hash::sha512* (derives::*sha512_algorithm_)() const;
    virtual vos::crypto::hash::sha512* sha512_algorithm() const {
        if ((sha512_algorithm_)) {
            return (this->*sha512_algorithm_)();
        }
        return openssl_sha512();
    }
    virtual vos::crypto::hash::sha512* openssl_sha512() const {
        return (vos::crypto::hash::sha512*)&openssl_sha512_;
    }

protected:
    vos::crypto::hash::openssl::sha512 openssl_sha512_;
}; /// class maint
typedef maint<> main;

} /// namespace sha512
} /// namespace hash
} /// namespace crypto
} /// namespace console
} /// namespace app
} /// namespace vos

#endif /// ndef VOS_APP_CONSOLE_CRYPTO_HASH_SHA512_MAIN_HPP