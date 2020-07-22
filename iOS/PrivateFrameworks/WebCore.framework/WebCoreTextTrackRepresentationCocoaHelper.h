//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebCore/CALayerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebCoreTextTrackRepresentationCocoaHelper : NSObject <CALayerDelegate>
{
    struct TextTrackRepresentationCocoa *_parent;
}

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property struct TextTrackRepresentationCocoa *parent;
- (void)dealloc;
- (id)initWithParent:(struct TextTrackRepresentationCocoa *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

