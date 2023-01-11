//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSSerialQueue;
@protocol FBSWorkspaceDelegate;

@interface FBSWorkspaceInitializationOptions : NSObject
{
    _Bool _startsInactive;
    id <FBSWorkspaceDelegate> _delegate;
    FBSSerialQueue *_callOutQueue;
}

+ (id)optionsWithDelegate:(id)arg1;
@property(nonatomic, setter=_setStartsInactive:) _Bool _startsInactive; // @synthesize _startsInactive;
@property(retain, nonatomic) FBSSerialQueue *callOutQueue; // @synthesize callOutQueue=_callOutQueue;
@property(readonly, nonatomic) id <FBSWorkspaceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_initWithDelegate:(id)arg1;
- (id)init;

@end
