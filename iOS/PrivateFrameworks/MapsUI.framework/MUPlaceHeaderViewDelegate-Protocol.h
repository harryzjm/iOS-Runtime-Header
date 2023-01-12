//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/NSObject-Protocol.h>

@class MKMapItem, MKMapItemIdentifier, MUPlaceHeaderView, MUPresentationOptions;

@protocol MUPlaceHeaderViewDelegate <NSObject>
- (void)headerView:(MUPlaceHeaderView *)arg1 didSelectEnclosingMapItemIdentifier:(MKMapItemIdentifier *)arg2;
- (void)headerView:(MUPlaceHeaderView *)arg1 didSelectEnclosingMapItem:(MKMapItem *)arg2;

@optional
- (void)headerView:(MUPlaceHeaderView *)arg1 didSelectShareWithPresentationOptions:(MUPresentationOptions *)arg2;
@end

