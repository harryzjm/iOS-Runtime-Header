//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface HKMobileCountryCode : NSObject
{
    NSString *_code;
    NSString *_ISOCode;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *ISOCode; // @synthesize ISOCode=_ISOCode;
@property(readonly, copy, nonatomic) NSString *code; // @synthesize code=_code;
- (id)initWithMobileCountryCode:(id)arg1 ISOCode:(id)arg2;

@end
