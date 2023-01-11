//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface HFAnalyticsTileInteractionEvent
{
    _Bool _isRoomDashboard;
    _Bool _isActionSetItem;
    _Bool _isCameraItem;
    _Bool _isServiceLikeItem;
    _Bool _isStatusItem;
    unsigned long long _interactionType;
    NSString *_itemClassName;
    long long _itemPrimaryState;
    long long _itemPriority;
    unsigned long long _numberOfRepresentedHomeKitObjects;
    NSString *_processName;
    NSString *_sourceViewControllerClassName;
}

+ (unsigned long long)_numberOfRepresentedHomeKitObjectsForItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sourceViewControllerClassName; // @synthesize sourceViewControllerClassName=_sourceViewControllerClassName;
@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(nonatomic) unsigned long long numberOfRepresentedHomeKitObjects; // @synthesize numberOfRepresentedHomeKitObjects=_numberOfRepresentedHomeKitObjects;
@property(nonatomic) long long itemPriority; // @synthesize itemPriority=_itemPriority;
@property(nonatomic) long long itemPrimaryState; // @synthesize itemPrimaryState=_itemPrimaryState;
@property(retain, nonatomic) NSString *itemClassName; // @synthesize itemClassName=_itemClassName;
@property(nonatomic) _Bool isStatusItem; // @synthesize isStatusItem=_isStatusItem;
@property(nonatomic) _Bool isServiceLikeItem; // @synthesize isServiceLikeItem=_isServiceLikeItem;
@property(nonatomic) _Bool isCameraItem; // @synthesize isCameraItem=_isCameraItem;
@property(nonatomic) _Bool isActionSetItem; // @synthesize isActionSetItem=_isActionSetItem;
@property(nonatomic) _Bool isRoomDashboard; // @synthesize isRoomDashboard=_isRoomDashboard;
@property(nonatomic) unsigned long long interactionType; // @synthesize interactionType=_interactionType;
- (id)payload;
- (id)initWithData:(id)arg1;

@end
