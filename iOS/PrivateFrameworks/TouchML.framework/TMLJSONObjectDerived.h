//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TMLJSONObject.h"

@class NSString;

@interface TMLJSONObjectDerived : TMLJSONObject
{
    TMLJSONObject *_parent;
    NSString *_keyPath;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (void).cxx_destruct;
- (void)tmlRemoveObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)tmlAddObserver:(id)arg1 forKeyPath:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setRawJSON:(id)arg1;
- (id)rawJSON;
- (id)initWithParent:(id)arg1 keyPath:(id)arg2;

@end

