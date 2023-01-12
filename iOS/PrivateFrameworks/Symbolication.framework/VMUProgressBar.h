//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface VMUProgressBar : NSObject
{
    NSString *_title;
    unsigned long long _totalItems;
    NSString *_itemName;
    unsigned long long _itemsDone;
    unsigned long long _successes;
    unsigned long long _failures;
}

- (void).cxx_destruct;
- (void)_printProgressBar;
- (void)itemCompleteWithStatus:(_Bool)arg1;
- (void)updateItemName:(id)arg1;
- (void)setTitle:(id)arg1 withTotalItems:(unsigned long long)arg2;

@end
