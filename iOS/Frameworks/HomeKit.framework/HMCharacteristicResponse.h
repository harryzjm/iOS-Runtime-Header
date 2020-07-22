//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMCharacteristicRequest, NSError;

@interface HMCharacteristicResponse : NSObject
{
    HMCharacteristicRequest *_request;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) HMCharacteristicRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithRequest:(id)arg1 error:(id)arg2;

@end

