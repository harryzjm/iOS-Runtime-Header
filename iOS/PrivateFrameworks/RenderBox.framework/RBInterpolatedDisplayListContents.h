//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RBInterpolatedDisplayListContents : NSObject
{
    struct objc_ptr<RBDisplayListInterpolator *> _interp;
    float _progress;
    struct spin_lock _contents_lock;
    struct objc_ptr<id<_RBDisplayListContents>> _contents;
    double _contentsScale;
}

+ (id)decodedObjectWithData:(id)arg1 delegate:(id)arg2 error:(id *)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) const void *_rb_xml_document;
@property(readonly, nonatomic) const void *_rb_contents;
- (id)encodedDataForDelegate:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSString *xmlDescription;
- (void)renderInContext:(struct CGContext *)arg1 options:(id)arg2;
- (void)_drawInState:(struct _RBDrawingState *)arg1 alpha:(float)arg2;
- (void)drawInState:(struct _RBDrawingState *)arg1;
@property(readonly, nonatomic) struct CGRect boundingRect;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

