//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

#import <UIKit/UIActivityItemSource-Protocol.h>

@class NSString;

@interface UIActivityItemProvider : NSOperation <UIActivityItemSource>
{
    id _placeholderItem;
    NSString *_activityType;
    id _providedItem;
}

@property(retain, nonatomic) id providedItem; // @synthesize providedItem=_providedItem;
@property(copy, nonatomic, setter=_setActivityType:) NSString *activityType; // @synthesize activityType=_activityType;
@property(retain, nonatomic) id placeholderItem; // @synthesize placeholderItem=_placeholderItem;
- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (_Bool)_shouldExecuteItemOperationForActivity:(id)arg1;
- (void)main;
@property(readonly, nonatomic) id item;
- (id)initWithPlaceholderItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

