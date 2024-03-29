//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, VSAccountChannels;

__attribute__((visibility("hidden")))
@interface VSAccountsArchive : NSObject
{
    NSArray *_accounts;
    VSAccountChannels *_channels;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) VSAccountChannels *channels; // @synthesize channels=_channels;
@property(copy, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

