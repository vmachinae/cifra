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
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 10/6/2020
///////////////////////////////////////////////////////////////////////
#ifndef VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_OPT_HPP
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_OPT_HPP

#include "vos/app/console/crypto/hash/base/main.hpp"
#include "vos/crypto/hash/md5.hpp"
#include "vos/crypto/hash/sha1.hpp"
#include "vos/crypto/hash/sha256.hpp"
#include "vos/crypto/hash/sha512.hpp"
/*#include "vos/app/console/crypto/base/main.hpp"
*//*
#include "vos/app/console/version/main.hpp"
#include "vos/lib/cifra/version.hpp"
*/

/*#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPT "hash"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTARG_RESULT 0
*//*
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTARG_MD5_C "m"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTARG_MD5_S "md5"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTARG_SHA1_C "1"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTARG_SHA1_S "sha1"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTARG_SHA256_C "2"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTARG_SHA256_S "sha256"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTARG_SHA512_C "5"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTARG_SHA512_S "sha512"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTARG_ALGS "{ " \
    "(" VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTARG_MD5_C ")" \
        VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTARG_MD5_S \
    " | (" VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTARG_SHA1_C ")" \
           VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTARG_SHA1_S \
    " | (" VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTARG_SHA256_C ")" \
           VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTARG_SHA256_S \
    " | (" VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTARG_SHA512_C ")" \
           VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTARG_SHA512_S \
    " }"
*/
/*#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTARG ""
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTUSE "simple hash"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTVAL_S "h"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTVAL_C 'h'
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTION \
   {VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPT, \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTARG_RESULT, \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTVAL_C}, \

#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_MERKEL_OPT "merkel"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_MERKEL_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_MERKEL_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_MERKEL_OPTARG ""
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_MERKEL_OPTUSE "merkel hash"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_MERKEL_OPTVAL_S "m"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_MERKEL_OPTVAL_C 'm'
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_MERKEL_OPTION \
   {VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_MERKEL_OPT, \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_MERKEL_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_MERKEL_OPTARG_RESULT, \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_MERKEL_OPTVAL_C}, \
*/
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_D_OPT "md5"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_D_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_D_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_D_OPTARG ""
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_D_OPTUSE "md5 algorithm"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_D_OPTVAL_S "d"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_D_OPTVAL_C 'd'
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_D_OPTION \
   {VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_D_OPT, \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_D_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_D_OPTARG_RESULT, \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_D_OPTVAL_C}, \

#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_1_OPT "sha1"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_1_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_1_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_1_OPTARG ""
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_1_OPTUSE "sha1 algorithm"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_1_OPTVAL_S "1"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_1_OPTVAL_C '1'
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_1_OPTION \
   {VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_1_OPT, \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_1_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_1_OPTARG_RESULT, \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_1_OPTVAL_C}, \

#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_2_OPT "sha256"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_2_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_2_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_2_OPTARG ""
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_2_OPTUSE "sha256 algorithm"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_2_OPTVAL_S "2"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_2_OPTVAL_C '2'
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_2_OPTION \
   {VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_2_OPT, \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_2_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_2_OPTARG_RESULT, \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_2_OPTVAL_C}, \

#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_5_OPT "sha512"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_5_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_5_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_5_OPTARG ""
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_5_OPTUSE "sha512 algorithm"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_5_OPTVAL_S "5"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_5_OPTVAL_C '5'
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_5_OPTION \
   {VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_5_OPT, \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_5_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_5_OPTARG_RESULT, \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_5_OPTVAL_C}, \

/*
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_PLAIN_OPT "plain"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_PLAIN_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_REQUIRED
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_PLAIN_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_PLAIN_OPTARG ""
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_PLAIN_OPTUSE "plain text"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_PLAIN_OPTVAL_S "p:"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_PLAIN_OPTVAL_C 'p'
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_PLAIN_OPTION \
   {VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_PLAIN_OPT, \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_PLAIN_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_PLAIN_OPTARG_RESULT, \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_PLAIN_OPTVAL_C}, \

#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_UPPER_OPT "X"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_UPPER_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_UPPER_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_UPPER_OPTARG ""
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_UPPER_OPTUSE "uppercase hex"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_UPPER_OPTVAL_S "X"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_UPPER_OPTVAL_C 'X'
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_UPPER_OPTION \
   {VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_UPPER_OPT, \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_UPPER_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_UPPER_OPTARG_RESULT, \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_UPPER_OPTVAL_C}, \

#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_LOWER_OPT "x"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_LOWER_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_LOWER_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_LOWER_OPTARG ""
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_LOWER_OPTUSE "lowercase hex"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_LOWER_OPTVAL_S "x"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_LOWER_OPTVAL_C 'x'
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_LOWER_OPTION \
   {VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_LOWER_OPT, \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_LOWER_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_LOWER_OPTARG_RESULT, \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_LOWER_OPTVAL_C}, \
*/

#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_D_OPTVAL_S \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_1_OPTVAL_S \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_2_OPTVAL_S \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_5_OPTVAL_S \
/*    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTVAL_S \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_MERKEL_OPTVAL_S \
    VOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_OPTVAL_S \
    VOS_APP_CONSOLE_CRYPTO_BASE_MAIN_BASE64_OPTVAL_S \
    VOS_APP_CONSOLE_CRYPTO_BASE_MAIN_UPPER_OPTVAL_S \
    VOS_APP_CONSOLE_CRYPTO_BASE_MAIN_LOWER_OPTVAL_S \
*//*   
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_PLAIN_OPTVAL_S \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_UPPER_OPTVAL_S \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_LOWER_OPTVAL_S \
*/

#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_D_OPTION \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_1_OPTION \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_2_OPTION \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_5_OPTION \
/*    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTION \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_MERKEL_OPTION \
    VOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_OPTION \
    VOS_APP_CONSOLE_CRYPTO_BASE_MAIN_BASE64_OPTION \
    VOS_APP_CONSOLE_CRYPTO_BASE_MAIN_UPPER_OPTION \
    VOS_APP_CONSOLE_CRYPTO_BASE_MAIN_LOWER_OPTION \
*//*   VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_PLAIN_OPTION \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_UPPER_OPTION \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_LOWER_OPTION \
*/

#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_OPTIONS_CHARS \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_APP_CONSOLE_CRYPTO_HASH_BASE_MAIN_OPTIONS_CHARS \
/*    VOS_APP_CONSOLE_CRYPTO_BASE_MAIN_OPTIONS_CHARS_BASE \
*//*    
    VOS_VERSION_MAIN_USAGE_OPTIONS_CHARS \
*/

#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_OPTIONS_OPTIONS \
    VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_APP_CONSOLE_CRYPTO_HASH_BASE_MAIN_OPTIONS_OPTIONS \
/*    VOS_APP_CONSOLE_CRYPTO_BASE_MAIN_OPTIONS_OPTIONS_BASE \
*//*    
    VOS_VERSION_MAIN_USAGE_OPTIONS_OPTIONS \
*/

#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_ARGS "[source]"
#define VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_ARGV "[source] hash source",

namespace vos {
namespace app {
namespace console {
namespace crypto {
namespace hash {

/// class main_optt
template <class TExtends = /*version*/crypto::hash::base::main/*t<lib::cifra::version>*/, class TImplements = typename TExtends::implements>
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
    main_optt():/* run_(0)*/hash_algorithm_(0) {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt& copy) {
        throw exception(exception_unexpected);
    }

protected:
    /*/// ...run
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

    /// ...plain_run
    virtual int plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = all_hash_run(argc, argv, env);
        return err;
    }

    /// ...cipher_run
    virtual int cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = all_hash_run(argc, argv, env);
        return err;
    }

    /// ...hash_run
    virtual int hash_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_hash_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_hash_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_hash_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_hash_run(argc, argv, env))) {
            int err2 = 0;
            err = hash_run(argc, argv, env);
            if ((err2 = after_hash_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_hash_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_hash_run;
        return err;
    }
    virtual int before_set_hash_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_hash_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_hash_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_set_hash_run(argc, argv, env))) {
            int err2 = 0;
            err = set_hash_run(argc, argv, env);
            if ((err2 = after_set_hash_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }*/

    /// ...hash_algorithm
    vos::crypto::hash::algorithm* (derives::*hash_algorithm_)() const;
    virtual vos::crypto::hash::algorithm* hash_algorithm() const {
        if ((this->hash_algorithm_)) {
            return (this->*hash_algorithm_)();
        }
        return default_hash_algorithm();
    }
    virtual vos::crypto::hash::algorithm* default_hash_algorithm() const {
        return sha1_hash_algorithm();
    }
    virtual vos::crypto::hash::algorithm* md5_hash_algorithm() const {
        return 0;
    }
    virtual vos::crypto::hash::algorithm* sha1_hash_algorithm() const {
        return 0;
    }
    virtual vos::crypto::hash::algorithm* sha256_hash_algorithm() const {
        return 0;
    }
    virtual vos::crypto::hash::algorithm* sha512_hash_algorithm() const {
        return 0;
    }

    /// on_..._option
    virtual int on_d_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        hash_algorithm_ = &derives::md5_hash_algorithm;
        err = this->all_set_plain_run(argc, argv, env);
        return err;
    }
    virtual int on_1_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        hash_algorithm_ = &derives::sha1_hash_algorithm;
        err = this->all_set_plain_run(argc, argv, env);
        return err;
    }
    virtual int on_2_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        hash_algorithm_ = &derives::sha256_hash_algorithm;
        err = this->all_set_plain_run(argc, argv, env);
        return err;
    }
    virtual int on_5_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        hash_algorithm_ = &derives::sha512_hash_algorithm;
        err = this->all_set_plain_run(argc, argv, env);
        return err;
    }
    /*virtual int on_hash_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        err = this->all_set_hash_run(argc, argv, env);
        return err;
    }
    virtual int on_merkel_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        }
        return err;
    }*/
/*  
    virtual int on_plain_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        }
        return err;
    }
    virtual int on_upper_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        }
        return err;
    }
    virtual int on_lower_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        }
        return err;
    }
*/

    /// ...option...
    virtual int on_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        case VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_D_OPTVAL_C:
            err = on_d_option
            (optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_1_OPTVAL_C:
            err = on_1_option
            (optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_2_OPTVAL_C:
            err = on_2_option
            (optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_5_OPTVAL_C:
            err = on_5_option
            (optval, optarg, optname, optind, argc, argv, env);
            break;
/*        case VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTVAL_C:
            err = on_hash_option
            (optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_MERKEL_OPTVAL_C:
            err = on_merkel_option
            (optval, optarg, optname, optind, argc, argv, env);
            break;
*//*
        case VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_PLAIN_OPTVAL_C:
            err = on_plain_option
            (optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_UPPER_OPTVAL_C:
            err = on_upper_option
            (optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_LOWER_OPTVAL_C:
            err = on_lower_option
            (optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_CONSOLE_MAIN_USAGE_OPTVAL_C:
            err = this->on_usage_option
            (optval, optarg, optname, optind, argc, argv, env);
            break;
*/
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
        case VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_D_OPTVAL_C:
            optarg = VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_D_OPTARG;
            chars = VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_D_OPTUSE;
            break;
        case VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_1_OPTVAL_C:
            optarg = VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_1_OPTARG;
            chars = VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_1_OPTUSE;
            break;
        case VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_2_OPTVAL_C:
            optarg = VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_2_OPTARG;
            chars = VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_2_OPTUSE;
            break;
        case VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_5_OPTVAL_C:
            optarg = VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_5_OPTARG;
            chars = VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_5_OPTUSE;
            break;
/*        case VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTVAL_C:
            optarg = VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTARG;
            chars = VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_HASH_OPTUSE;
            break;
        case VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_MERKEL_OPTVAL_C:
            optarg = VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_MERKEL_OPTARG;
            chars = VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_MERKEL_OPTUSE;
            break;
*//*
        case VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_PLAIN_OPTVAL_C:
            optarg = VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_PLAIN_OPTARG;
            chars = VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_PLAIN_OPTUSE;
            break;
        case VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_UPPER_OPTVAL_C:
            optarg = VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_UPPER_OPTARG;
            chars = VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_UPPER_OPTUSE;
            break;
        case VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_LOWER_OPTVAL_C:
            optarg = VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_LOWER_OPTARG;
            chars = VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_LOWER_OPTUSE;
            break;
        case VOS_CONSOLE_MAIN_USAGE_OPTVAL_C:
            chars = this->usage_option_usage(optarg, longopt);
            break;
*/
        default:
            chars = extends::option_usage(optarg, longopt);
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        int err = 0;
        static const char_t* chars = VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// arguments
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_ARGS;
        static const char_t* _argv[] = {
            VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace hash
} /// namespace crypto
} /// namespace console
} /// namespace app
} /// namespace vos

#endif /// VOS_APP_CONSOLE_CRYPTO_HASH_MAIN_OPT_HPP
