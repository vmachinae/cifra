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
///   File: extend.hpp
///
/// Author: $author$
///   Date: 2/1/2021
///////////////////////////////////////////////////////////////////////
#ifndef VOS_CRYPTO_CIPHER_DES3_EXTEND_HPP
#define VOS_CRYPTO_CIPHER_DES3_EXTEND_HPP

#include "vos/crypto/cipher/des3/implement.hpp"
#include "vos/crypto/cipher/des/extend.hpp"

namespace vos {
namespace crypto {
namespace cipher {
namespace des3 {

/// class extendt
template <class TExtends = des::extend, class TImplements = des3::implement>
class exported extendt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef extendt derives; 
    
    /// constructors / destructor
    extendt(const extendt& copy): extends(copy) {
    }
    extendt() {
    }
    virtual ~extendt() {
    }
}; /// class extendt
typedef extendt<> extend;

} /// namespace des3
} /// namespace cipher
} /// namespace crypto
} /// namespace vos

#endif /// VOS_CRYPTO_CIPHER_DES3_EXTEND_HPP
