//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class CKContainer;

@interface IMDCKDatabaseManager : NSObject
{
    CKContainer *_truthContainer;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) CKContainer *truthContainer; // @synthesize truthContainer=_truthContainer;
- (id)truthDatabase;
- (void)dealloc;
- (id)init;

@end

