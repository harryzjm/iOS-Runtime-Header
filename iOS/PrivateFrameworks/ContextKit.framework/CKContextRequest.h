//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContextKit/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface CKContextRequest : NSObject <NSSecureCoding>
{
    _Bool _prepareOnly;
    _Bool _debug;
    _Bool _dontSkip;
    _Bool _timing;
    unsigned int _topk;
    NSString *_text;
    NSNumber *_overrideBlendAlpha;
    NSNumber *_overrideBlendBeta;
    NSNumber *_overrideBlendGamma;
    NSString *_languageTag;
    long long _type;
}

+ (void)logTransactionSuccessfulForResponseId:(id)arg1 inputLength:(unsigned long long)arg2 completionLength:(unsigned long long)arg3 requestType:(long long)arg4 logType:(unsigned long long)arg5;
+ (void)logEngagementForResponseId:(id)arg1 result:(id)arg2 rank:(unsigned long long)arg3 inputLength:(unsigned long long)arg4 completionLength:(unsigned long long)arg5 requestType:(long long)arg6 logType:(unsigned long long)arg7;
+ (void)logResultsShownForResponseId:(id)arg1 shown:(unsigned long long)arg2 couldHaveShown:(unsigned long long)arg3 serverOverride:(_Bool)arg4 inputLength:(unsigned long long)arg5 requestType:(long long)arg6 logType:(unsigned long long)arg7;
+ (_Bool)shutdownService;
+ (_Bool)pingService;
+ (id)requestWithText:(id)arg1;
+ (id)trimTextToSize:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)_newXpcConnection;
+ (id)_xpcConnection;
+ (void)portraitBlacklistWithReply:(CDUnknownBlockType)arg1;
+ (void)statusWithReply:(CDUnknownBlockType)arg1;
+ (void)findResponseByID:(id)arg1 withReply:(CDUnknownBlockType)arg2;
+ (void)prepareRequestForText:(id)arg1 withReply:(CDUnknownBlockType)arg2;
+ (void)warmUpForRequestType:(long long)arg1 withReply:(CDUnknownBlockType)arg2;
+ (void)runOffMainThread:(CDUnknownBlockType)arg1;
+ (void)findResultsForText:(id)arg1 languageTag:(id)arg2 requestType:(long long)arg3 withReply:(CDUnknownBlockType)arg4;
+ (void)findResultsForText:(id)arg1 languageTag:(id)arg2 withReply:(CDUnknownBlockType)arg3;
+ (void)findResultsForText:(id)arg1 withReply:(CDUnknownBlockType)arg2;
+ (void)setDefaultRequestType:(long long)arg1;
+ (void)initialize;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *languageTag; // @synthesize languageTag=_languageTag;
@property(nonatomic) unsigned int topk; // @synthesize topk=_topk;
@property(retain, nonatomic) NSNumber *overrideBlendGamma; // @synthesize overrideBlendGamma=_overrideBlendGamma;
@property(retain, nonatomic) NSNumber *overrideBlendBeta; // @synthesize overrideBlendBeta=_overrideBlendBeta;
@property(retain, nonatomic) NSNumber *overrideBlendAlpha; // @synthesize overrideBlendAlpha=_overrideBlendAlpha;
@property(nonatomic) _Bool timing; // @synthesize timing=_timing;
@property(nonatomic) _Bool dontSkip; // @synthesize dontSkip=_dontSkip;
@property(nonatomic) _Bool debug; // @synthesize debug=_debug;
@property(nonatomic) _Bool prepareOnly; // @synthesize prepareOnly=_prepareOnly;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)executeWithReply:(CDUnknownBlockType)arg1;
- (id)initWithText:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

