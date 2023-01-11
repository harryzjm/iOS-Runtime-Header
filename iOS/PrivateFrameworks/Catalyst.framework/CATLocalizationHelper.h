//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBundle, NSLock, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CATLocalizationHelper : NSObject
{
    NSMutableDictionary *mStringByKeyByTableName;
    NSLock *mLock;
    NSBundle *_bundle;
}

+ (id)helperForBundle:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak NSBundle *bundle; // @synthesize bundle=_bundle;
- (id)stringsForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)stringByKeyForTableName:(id)arg1;
- (id)initWithBundle:(id)arg1;

@end
