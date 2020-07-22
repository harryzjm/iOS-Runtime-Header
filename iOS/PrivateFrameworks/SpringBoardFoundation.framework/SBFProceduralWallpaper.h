//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <SpringBoardFoundation/SBFProceduralWallpaper-Protocol.h>

@class NSString;
@protocol SBFProceduralWallpaperDelegate;

@interface SBFProceduralWallpaper : UIView <SBFProceduralWallpaper>
{
}

+ (id)identifier;
- (id)view;
- (void)setAnimating:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <SBFProceduralWallpaperDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
