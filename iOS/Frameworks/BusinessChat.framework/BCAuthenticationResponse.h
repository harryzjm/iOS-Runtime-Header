//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BusinessChat/BCDictionaryImageSerializable-Protocol.h>

@class BCError, NSArray, NSDictionary, NSString;

@interface BCAuthenticationResponse : NSObject <BCDictionaryImageSerializable>
{
    NSString *_status;
    NSString *_token;
    NSArray *_errors;
}

@property(retain, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) NSString *status; // @synthesize status=_status;
- (void).cxx_destruct;
@property(readonly, nonatomic) BCError *error;
@property(readonly, nonatomic) NSDictionary *dictionaryValue;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 imageDictionary:(id)arg2;
- (id)initWithToken:(id)arg1 error:(id)arg2;

@end
