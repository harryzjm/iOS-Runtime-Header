//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPAVRoute;

@interface MPAVRoutingControllerSelection : NSObject
{
    MPAVRoute *_route;
    long long _selectionOperation;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) long long selectionOperation; // @synthesize selectionOperation=_selectionOperation;
@property(retain, nonatomic) MPAVRoute *route; // @synthesize route=_route;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRoute:(id)arg1 selectionOperation:(long long)arg2;

@end
