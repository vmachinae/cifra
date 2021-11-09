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
///   File: implement.hpp
///
/// Author: $author$
///   Date: 2/1/2021
///////////////////////////////////////////////////////////////////////
#ifndef VOS_CRYPTO_CIPHER_DES_IMPLEMENT_HPP
#define VOS_CRYPTO_CIPHER_DES_IMPLEMENT_HPP

#include "vos/crypto/cipher/implement.hpp"

#define VOS_CRYPTO_CIPHER_DES_NAME "des"

namespace vos {
namespace crypto {
namespace cipher {
namespace des {

enum {
    BLOCKSIZE = 8,

    KEYMIN    = 8,
    KEYMAX    = 8,
    KEYINC    = 0,
    KEYSIZE   = 8,

    IVMIN     = 8,
    IVMAX     = 8,
    IVINC     = 0,
    IVSIZE    = 8
};

/// class implementt
template <class TImplements = cipher::implement>
class exported implementt: virtual public TImplements {
public:
    typedef TImplements implements;
    typedef implementt derives; 
    
    /// key_size...
    virtual ssize_t key_size_min() const {
        return KEYMIN;
    }
    virtual ssize_t key_size_max() const {
        return KEYMAX;
    }
    virtual ssize_t key_size_inc() const {
        return KEYINC;
    }
    virtual ssize_t key_size() const {
        return KEYSIZE;
    }

    /// iv_size...
    virtual ssize_t iv_size_min() const {
        return IVMIN;
    }
    virtual ssize_t iv_size_max() const {
        return IVMAX;
    }
    virtual ssize_t iv_size_inc() const {
        return IVINC;
    }
    virtual ssize_t iv_size() const {
        return IVSIZE;
    }

    /// ...block...
    virtual ssize_t block_size() const {
        return BLOCKSIZE;
    }
    virtual bool is_block() const {
        return true;
    }
    virtual bool is_stream() const {
        return false;
    }

    /// name
    virtual const char* name() const {
        return VOS_CRYPTO_CIPHER_DES_NAME;
    }
}; /// class implementt
typedef implementt<> implement;

} /// namespace des
} /// namespace cipher
} /// namespace crypto
} /// namespace vos

#endif /// VOS_CRYPTO_CIPHER_DES_IMPLEMENT_HPP