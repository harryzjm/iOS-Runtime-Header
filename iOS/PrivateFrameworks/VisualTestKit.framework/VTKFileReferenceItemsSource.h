//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VisualTestKit/VTKReferenceItemsSource-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VTKFileReferenceItemsSource : NSObject <VTKReferenceItemsSource>
{
    NSString *_itemsDirectory;
}

@property(copy, nonatomic) NSString *itemsDirectory; // @synthesize itemsDirectory=_itemsDirectory;
- (void).cxx_destruct;
- (id)referenceImageURLWithTestCase:(id)arg1;
- (id)referenceImageWithID:(id)arg1 testCase:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

