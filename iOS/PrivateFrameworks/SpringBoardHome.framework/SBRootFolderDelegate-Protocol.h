//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class SBIcon, SBRootFolder;

@protocol SBRootFolderDelegate <NSObject>
- (_Bool)rootFolder:(SBRootFolder *)arg1 canBounceIcon:(SBIcon *)arg2;
- (_Bool)rootFolder:(SBRootFolder *)arg1 shouldAllowBadgingForIcon:(SBIcon *)arg2;
@end
