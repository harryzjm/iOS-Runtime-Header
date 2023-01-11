//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NURenderNode;

@interface NURenderTagNode
{
    NSString *_name;
}

+ (_Bool)validateName:(id)arg1 error:(out id *)arg2;
- (void).cxx_destruct;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)descriptionSubClassHook;
- (id)_descriptionWithOffset:(long long)arg1 showInputs:(_Bool)arg2;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (id)_evaluateGeometrySpaceMap:(out id *)arg1;
- (id)_evaluateImage:(out id *)arg1;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;
@property(retain) NURenderNode *input;
- (id)initWithInput:(id)arg1 name:(id)arg2;
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;

@end
