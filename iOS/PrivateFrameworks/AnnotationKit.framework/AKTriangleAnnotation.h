//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AnnotationKit/AKFlippableAnnotationProtocol-Protocol.h>

@class NSString, UIBezierPath;

@interface AKTriangleAnnotation <AKFlippableAnnotationProtocol>
{
    _Bool _verticallyFlipped;
    _Bool _horizontallyFlipped;
    UIBezierPath *_path;
}

+ (_Bool)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
- (void).cxx_destruct;
@property _Bool horizontallyFlipped; // @synthesize horizontallyFlipped=_horizontallyFlipped;
@property _Bool verticallyFlipped; // @synthesize verticallyFlipped=_verticallyFlipped;
@property(retain) UIBezierPath *path; // @synthesize path=_path;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect)hitTestBounds;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (id)displayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
