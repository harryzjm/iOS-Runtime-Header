//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSCopying-Protocol.h>
#import <PhotosUICore/NSObject-Protocol.h>

@class NSString, PHCollection;
@protocol PXGridPresentation;

@protocol PXNavigationListItem <NSObject, NSCopying>
@property(readonly, nonatomic) NSString *visualDescription;
@property(readonly, nonatomic) PHCollection *collection;
@property(readonly, nonatomic) long long indentationLevel;
@property(readonly, nonatomic, getter=isExpanded) _Bool expanded;
@property(readonly, nonatomic, getter=isExpandable) _Bool expandable;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *imageName;
@property(readonly, nonatomic) NSString *accessoryTitle;
@property(readonly, nonatomic) NSString *title;

@optional
- (struct NSObject *)viewControllerForCollectionWithGridPresentation:(id <PXGridPresentation>)arg1;
- (const struct __CFString *)aggregateDictionaryKey;
@end

