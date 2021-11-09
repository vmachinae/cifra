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
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 1/27/2021
///////////////////////////////////////////////////////////////////////
#ifndef VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_OPT_HPP
#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_OPT_HPP

#include "vos/app/console/crypto/cipher/base/main.hpp"

#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPT "algorithm"
#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTARG_AES_C "a"
#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTARG_AES_S "aes"
#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTARG_DES3_C "d"
#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTARG_DES3_S "des3"
#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTARG_RC4_C "r"
#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTARG_RC4_S "rc4"
#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTARG "{ " \
    "(" VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTARG_AES_C ")" \
        VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTARG_AES_S \
    " | (" VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTARG_DES3_C ")" \
           VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTARG_DES3_S \
    " | (" VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTARG_RC4_C ")" \
           VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTARG_RC4_S \
    " }"
#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTUSE "cipher algorithm"
#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTVAL_S "a::"
#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTVAL_C 'a'
#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTION \
   {VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPT, \
    VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTARG_RESULT, \
    VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTVAL_C}, \

#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ENCRYPT_OPT "encrypt"
#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ENCRYPT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ENCRYPT_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ENCRYPT_OPTARG ""
#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ENCRYPT_OPTUSE "encrypt plain text"
#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ENCRYPT_OPTVAL_S "e::"
#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ENCRYPT_OPTVAL_C 'e'
#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ENCRYPT_OPTION \
   {VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ENCRYPT_OPT, \
    VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ENCRYPT_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ENCRYPT_OPTARG_RESULT, \
    VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ENCRYPT_OPTVAL_C}, \

#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_DECRYPT_OPT "decrypt"
#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_DECRYPT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_DECRYPT_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_DECRYPT_OPTARG ""
#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_DECRYPT_OPTUSE "decrypt cipher text"
#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_DECRYPT_OPTVAL_S "d::"
#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_DECRYPT_OPTVAL_C 'd'
#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_DECRYPT_OPTION \
   {VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_DECRYPT_OPT, \
    VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_DECRYPT_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_DECRYPT_OPTARG_RESULT, \
    VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_DECRYPT_OPTVAL_C}, \

#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTVAL_S \
    VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ENCRYPT_OPTVAL_S \
    VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_DECRYPT_OPTVAL_S \

#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTION \
    VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ENCRYPT_OPTION \
    VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_DECRYPT_OPTION \

#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_OPTIONS_CHARS \
    VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_APP_CONSOLE_CRYPTO_BASE_MAIN_OPTIONS_CHARS \

#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_OPTIONS_OPTIONS \
    VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_APP_CONSOLE_CRYPTO_BASE_MAIN_OPTIONS_OPTIONS \

#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ARGS VOS_APP_CONSOLE_CRYPTO_BASE_MAIN_ARGS
#define VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ARGV VOS_APP_CONSOLE_CRYPTO_BASE_MAIN_ARGV

namespace vos {
namespace app {
namespace console {
namespace crypto {
namespace cipher {

/// class main_optt
template <class TExtends = crypto::base::main, class TImplements = typename TExtends::implements>
class exported main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives; 
    
    typedef typename extends::file_t file_t;
    typedef typename extends::string_t string_t;
    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };

    /// constructors / destructor
    main_optt() {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt& copy) {
        throw exception(exception_unexpected);
    }

protected:
    /// ...run
    int (derives::*run_)(int argc, char_t** argv, char_t** env);
    virtual int default_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((this->run_)) {
            err = (this->*run_)(argc, argv, env);
        } else {
            err = extends::default_run(argc, argv, env);
        }
        return err;
    }

    /// ...encipher_run
    virtual int encipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_encipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_encipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_encipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_encipher_run(argc, argv, env))) {
            int err2 = 0;
            err = encipher_run(argc, argv, env);
            if ((err2 = after_encipher_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_encipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_encipher_run;
        return err;
    }
    virtual int before_set_encipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_encipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_encipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_set_encipher_run(argc, argv, env))) {
            int err2 = 0;
            err = set_encipher_run(argc, argv, env);
            if ((err2 = after_set_encipher_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...decipher_run
    virtual int decipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_decipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_decipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_decipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_decipher_run(argc, argv, env))) {
            int err2 = 0;
            err = decipher_run(argc, argv, env);
            if ((err2 = after_decipher_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_decipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_decipher_run;
        return err;
    }
    virtual int before_set_decipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_decipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_decipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_set_decipher_run(argc, argv, env))) {
            int err2 = 0;
            err = set_decipher_run(argc, argv, env);
            if ((err2 = after_set_decipher_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...on...option...
    virtual int on_aes_cipher_algorithm_option
    (int optval, const char* optarg,
     const char* optname, int optind,
     int argc, char**argv, char**env) {
        int err = 0;
        return err;
    }
    virtual int on_des3_cipher_algorithm_option
    (int optval, const char* optarg,
     const char* optname, int optind,
     int argc, char**argv, char**env) {
        int err = 0;
        return err;
    }
    virtual int on_rc4_cipher_algorithm_option
    (int optval, const char* optarg,
     const char* optname, int optind,
     int argc, char**argv, char**env) {
        int err = 0;
        return err;
    }
    virtual int on_cipher_algorithm_option
    (int optval, const char* optarg,
     const char* optname, int optind,
     int argc, char**argv, char**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if ((!(optarg[1]) && (VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTARG_AES_C[0] == (optarg[0])))
                || !(chars_t::compare(optarg, VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTARG_AES_S))) {
                err = this->on_aes_cipher_algorithm_option(optval, optarg, optname, optind, argc, argv, env);
            } else {
                if ((!(optarg[1]) && (VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTARG_DES3_C[0] == (optarg[0])))
                    || !(chars_t::compare(optarg, VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTARG_DES3_S))) {
                    err = this->on_des3_cipher_algorithm_option(optval, optarg, optname, optind, argc, argv, env);
                } else {
                    if ((!(optarg[1]) && (VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTARG_RC4_C[0] == (optarg[0])))
                        || !(chars_t::compare(optarg, VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTARG_RC4_S))) {
                        err = this->on_rc4_cipher_algorithm_option(optval, optarg, optname, optind, argc, argv, env);
                    } else {
                        err = this->on_invalid_option_arg(optval, optarg, optname, optind, argc, argv, env);
                    }
                }
            }
        }
        return err;
    }
    virtual int on_encrypt_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        this->all_set_encipher_run(argc, argv, env);
        if ((optarg) && (optarg[0])) {
        }
        return err;
    }
    virtual int on_decrypt_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        this->all_set_decipher_run(argc, argv, env);
        if ((optarg) && (optarg[0])) {
        }
        return err;
    }

    /// ...option...
    virtual int on_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        case VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTVAL_C:
            err = on_cipher_algorithm_option
            (optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ENCRYPT_OPTVAL_C:
            err = on_encrypt_option
            (optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_DECRYPT_OPTVAL_C:
            err = on_decrypt_option
            (optval, optarg, optname, optind, argc, argv, env);
            break;
        default:
            err = extends::on_option
            (optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage
    (const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        case VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTVAL_C:
            optarg = VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTARG;
            chars = VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ALGORITHM_OPTUSE;
            break;
        case VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ENCRYPT_OPTVAL_C:
            optarg = VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ENCRYPT_OPTARG;
            chars = VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ENCRYPT_OPTUSE;
            break;
        case VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_DECRYPT_OPTVAL_C:
            optarg = VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_DECRYPT_OPTARG;
            chars = VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_DECRYPT_OPTUSE;
            break;
        default:
            chars = extends::option_usage(optarg, longopt);
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        int err = 0;
        static const char_t* chars = VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// arguments
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ARGS;
        static const char_t* _argv[] = {
            VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace cipher
} /// namespace crypto
} /// namespace console
} /// namespace app
} /// namespace vos

#endif /// VOS_APP_CONSOLE_CRYPTO_CIPHER_MAIN_OPT_HPP
