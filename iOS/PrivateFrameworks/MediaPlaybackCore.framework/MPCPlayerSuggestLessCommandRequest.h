//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPCPlayerCommandRequest.h"

@class MPModelObject;

__attribute__((visibility("hidden")))
@interface MPCPlayerSuggestLessCommandRequest : MPCPlayerCommandRequest
{
    _Bool _value;
    MPModelObject *_modelObject;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool value; // @synthesize value=_value;
@property(readonly, nonatomic) MPModelObject *modelObject; // @synthesize modelObject=_modelObject;
- (id)initWithModelObject:(id)arg1 value:(_Bool)arg2 controller:(id)arg3 label:(id)arg4;

@end

