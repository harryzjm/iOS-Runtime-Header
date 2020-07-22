//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUCellProtocol-Protocol.h>
#import <HomeUI/NSObject-Protocol.h>

@class HUGridCellLayoutOptions;

@protocol HUGridCellProtocol <NSObject, HUCellProtocol>
+ (Class)layoutOptionsClass;
@property(retain, nonatomic) HUGridCellLayoutOptions *layoutOptions;
@property(nonatomic, getter=areCellContentsHidden) _Bool cellContentsHidden;

@optional
@property(nonatomic, getter=isRearranging) _Bool rearranging;
@end

