//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSUserDefaults;

@interface REMUserDefaults : NSObject
{
    _Bool _showRemindersAsOverdue_cached;
    NSString *_suiteName;
    NSMutableDictionary *_observers;
    NSUserDefaults *_userDefaults;
}

+ (id)appGroupUserDefaults;
+ (id)daemonUserDefaults;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(nonatomic) _Bool showRemindersAsOverdue_cached; // @synthesize showRemindersAsOverdue_cached=_showRemindersAsOverdue_cached;
@property(readonly, nonatomic) NSMutableDictionary *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSString *suiteName; // @synthesize suiteName=_suiteName;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_removeObserver:(id)arg1;
- (id)_addObserverForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_startStreamingValuesForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_startObservingValuesForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithSuiteName:(id)arg1 containerURL:(id)arg2;

@end
