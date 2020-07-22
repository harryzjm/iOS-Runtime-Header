//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSExtension;
@protocol CNDonationExtensionLogger;

@interface CNDDonorExtension : NSObject
{
    NSExtension *_extension;
    id <CNDonationExtensionLogger> _logger;
}

@property(readonly, nonatomic) id <CNDonationExtensionLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
- (void).cxx_destruct;
- (void)redonateAllValuesWithReason:(unsigned long long)arg1;
- (void)renewExpirationDateForDonatedValue:(id)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;
- (id)description;
- (id)initWithExtension:(id)arg1 logger:(id)arg2;
- (id)initWithExtension:(id)arg1;

@end
