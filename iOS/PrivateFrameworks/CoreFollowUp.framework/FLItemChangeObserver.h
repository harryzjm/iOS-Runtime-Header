//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FLItemChangeObserver : NSObject
{
    int _notifyToken;
    CDUnknownBlockType _itemChangeObserver;
}

+ (id)observerWithChangeHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setItemChangeHandler:(CDUnknownBlockType)arg1;

@end

