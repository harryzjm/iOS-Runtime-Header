//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ML3AccountCacheEntry : NSObject
{
    NSString *_appleID;
    NSString *_altDSID;
}

@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(retain, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
- (void).cxx_destruct;
- (id)initWithAppleID:(id)arg1 altDSID:(id)arg2;

@end
