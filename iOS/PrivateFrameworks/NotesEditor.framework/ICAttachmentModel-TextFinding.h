//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICAttachmentModel.h>

@class NSArray, NSString;

@interface ICAttachmentModel (TextFinding)
+ (id)writableTypeIdentifiersForItemProvider;
- (void)textFindingResultsMatchingString:(id)arg1 ignoreCase:(_Bool)arg2 wholeWords:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (void)registerFileLoadHandlersOnItemProvider:(id)arg1;
- (id)itemProviderWritingData;
- (id)itemProviderWritingURL;
- (id)itemProviderUTI;
- (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
- (long long)itemProviderType;
- (id)itemProviderIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

