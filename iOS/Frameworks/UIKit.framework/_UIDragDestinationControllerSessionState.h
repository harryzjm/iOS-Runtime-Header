//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@protocol UIDropSession;

__attribute__((visibility("hidden")))
@interface _UIDragDestinationControllerSessionState : NSObject
{
    int _state;
    id <UIDropSession> _dropSession;
}

@property(retain, nonatomic) id <UIDropSession> dropSession; // @synthesize dropSession=_dropSession;
@property(nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isDragging;
@property(readonly, nonatomic) _Bool isReordering;
@property(readonly, nonatomic) _Bool isActive;
- (id)description;

@end
