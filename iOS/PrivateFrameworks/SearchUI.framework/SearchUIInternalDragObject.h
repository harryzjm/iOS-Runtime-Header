//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchUI/NSItemProviderWriting-Protocol.h>

@class NSArray, NSString, SearchUIRowModel;

@interface SearchUIInternalDragObject : NSObject <NSItemProviderWriting>
{
    SearchUIRowModel *_dragObject;
}

+ (id)writableTypeIdentifiersForItemProvider;
- (void).cxx_destruct;
@property(retain) SearchUIRowModel *dragObject; // @synthesize dragObject=_dragObject;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
- (_Bool)shouldShareDragURL;
- (id)initWithDragObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
