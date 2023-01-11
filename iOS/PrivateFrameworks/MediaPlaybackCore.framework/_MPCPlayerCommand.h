//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlayerPath, MPCPlayerResponse;

@interface _MPCPlayerCommand : NSObject
{
    MPCPlayerResponse *_response;
    MPCPlayerPath *_playerPath;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) MPCPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
@property(readonly, nonatomic) MPCPlayerResponse *response; // @synthesize response=_response;
- (id)initWithPlayerPath:(id)arg1;
- (id)initWithResponse:(id)arg1;

@end
