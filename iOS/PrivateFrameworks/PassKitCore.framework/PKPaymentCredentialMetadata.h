//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKPaymentCredentialMetadata : NSObject
{
    NSString *_localizedDisplayName;
    NSString *_value;
}

+ (id)paymentCredentialMetadataWithConfiguration:(id)arg1;
+ (Class)classForValueType:(id)arg1;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *localizedDisplayName; // @synthesize localizedDisplayName=_localizedDisplayName;
- (void).cxx_destruct;
- (id)displayString;
- (id)initWithConfiguration:(id)arg1;

@end

