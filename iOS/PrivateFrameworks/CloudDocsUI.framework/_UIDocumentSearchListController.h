//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, _UIDocumentPickerSearchContainerModel;

@interface _UIDocumentSearchListController
{
    _UIDocumentPickerSearchContainerModel *_model;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
- (void).cxx_destruct;
- (void)itemsOrSelectionDidChange:(_Bool)arg1;
- (_Bool)hideSearchField;
@property(retain, nonatomic) NSString *queryString;
- (id)initWithModel:(id)arg1;
- (id)init;
- (Class)_classForChildren;

@end

