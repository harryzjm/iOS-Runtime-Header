//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableGraphemeToPhonemeResponse
{
}

@property(copy, nonatomic) NSArray *jit_token_prons;
@property(copy, nonatomic) NSArray *aot_token_prons;
@property(copy, nonatomic) NSString *phoneset_version;
@property(copy, nonatomic) NSString *g2p_model_version;
@property(copy, nonatomic) NSString *g2p_version;
@property(nonatomic) _Bool is_pron_guessed;
@property(copy, nonatomic) NSArray *phonemes;
@property(copy, nonatomic) NSString *return_str;
@property(nonatomic) int return_code;
@property(copy, nonatomic) NSString *session_id;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

