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
///   File: implemented.hpp
///
/// Author: $author$
///   Date: 2/2/2021
///////////////////////////////////////////////////////////////////////
#ifndef VOS_CRYPTO_CIPHER_RC4_ETIRIS_IMPLEMENTED_HPP
#define VOS_CRYPTO_CIPHER_RC4_ETIRIS_IMPLEMENTED_HPP

#include "vos/crypto/cipher/rc4/extend.hpp"

namespace vos {
namespace crypto {
namespace cipher {
namespace rc4 {
namespace etiris {

typedef rc4::extend::implements implements;
typedef rc4::extend extends;

/// class implemented
class exported implemented: virtual public etiris::implements, public etiris::extends {
public:
    typedef etiris::implements implements;
    typedef etiris::extends extends;
    typedef implemented derives; 
    
    /// constructors / destructor
    implemented(const void* key, size_t keylen) {
        clear();
        if (0 > (initialize(key, keylen))) {
            LOGGER_LOG_ERROR("...failed on initialize(key, keylen) throw (error_failed)...");
            throw (error_failed);
        }
    }
    implemented(const void* key) {
        clear();
        if (0 > (initialize(key, 0))) {
            LOGGER_LOG_ERROR("...failed on initialize(key, 0) throw (error_failed)...");
            throw (error_failed);
        }
    }
    implemented() {
        clear();
    }
    virtual ~implemented() {
        clear();
    }
private:
    implemented(const implemented& copy) {
    }
public:

    using implements::initialize;
    virtual ssize_t initialize
    (const void* key, size_t keylen, 
     const void* iv = 0, size_t ivlen = 0, const void* padd = 0, size_t paddlen = 0);
    virtual void clear();

    virtual ssize_t encrypt(void* out, size_t outsize, const void* in, size_t inlen);
    virtual ssize_t decrypt(void* out, size_t outsize, const void* in, size_t inlen);

protected:
    byte_t  m_x, m_y, m_data[256];
}; /// class implemented

} /// namespace etiris
} /// namespace rc4
} /// namespace cipher
} /// namespace crypto
} /// namespace vos

#endif /// VOS_CRYPTO_CIPHER_RC4_ETIRIS_IMPLEMENTED_HPP
