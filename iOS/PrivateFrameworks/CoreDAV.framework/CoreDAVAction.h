//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CoreDAVAction : NSObject
{
    int _action;
    id _context;
    id _changeContext;
}

@property(retain, nonatomic) id changeContext; // @synthesize changeContext=_changeContext;
@property(readonly, nonatomic) id context; // @synthesize context=_context;
@property(readonly, nonatomic) int action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAction:(int)arg1 context:(id)arg2;

@end
