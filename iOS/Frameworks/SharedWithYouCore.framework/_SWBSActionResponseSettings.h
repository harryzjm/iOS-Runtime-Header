//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSMutableSettings;

__attribute__((visibility("hidden")))
@interface _SWBSActionResponseSettings : NSObject
{
    BSMutableSettings *_mutableSettings;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BSMutableSettings *mutableSettings; // @synthesize mutableSettings=_mutableSettings;
- (void)setFlag:(_Bool)arg1 forSetting:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forSetting:(unsigned long long)arg2;
- (id)bsSettings;
- (id)init;

@end

