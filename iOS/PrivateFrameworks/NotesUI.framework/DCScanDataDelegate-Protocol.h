//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesUI/NSObject-Protocol.h>

@class NSString;
@protocol DCScanDataDelegate;

@protocol DCScanDataDelegate <NSObject>
- (NSString *)identifier;
- (id <DCScanDataDelegate>)parentAttachment;
@end
