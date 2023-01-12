//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;
@protocol CKInboxModelDelegate;

@interface CKInboxModel : NSObject
{
    id <CKInboxModelDelegate> _delegate;
    NSArray *_sections;
    CDUnknownBlockType _footerAction;
    CDUnknownBlockType _logInboxViewedMetric;
    NSDictionary *_itemsMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *itemsMap; // @synthesize itemsMap=_itemsMap;
@property(copy, nonatomic) CDUnknownBlockType logInboxViewedMetric; // @synthesize logInboxViewedMetric=_logInboxViewedMetric;
@property(copy, nonatomic) CDUnknownBlockType footerAction; // @synthesize footerAction=_footerAction;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) __weak id <CKInboxModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setIsCollapsed:(_Bool)arg1;
- (id)buildItemsMap:(id)arg1;
- (id)initWithSections:(id)arg1 footerAction:(CDUnknownBlockType)arg2;

@end
