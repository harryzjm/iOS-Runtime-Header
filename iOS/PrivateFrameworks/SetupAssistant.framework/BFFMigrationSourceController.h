//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BYMigrationSourceController;

@interface BFFMigrationSourceController : NSObject
{
    CDUnknownBlockType _dismissHandler;
    BYMigrationSourceController *_sourceController;
}

@property(retain, nonatomic) BYMigrationSourceController *sourceController; // @synthesize sourceController=_sourceController;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
- (void).cxx_destruct;
- (void)setFileTransferSession:(id)arg1;
- (id)initialViewController;
- (id)initWithFileTransferSession:(id)arg1;

@end
