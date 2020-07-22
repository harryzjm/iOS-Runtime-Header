//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ICAppURLUtilities : NSObject
{
}

+ (id)firstQueryItemInURL:(id)arg1 withURLScheme:(id)arg2 andHost:(id)arg3 andQueryItemName:(id)arg4;
+ (id)contentOffsetFromQuickNoteURL:(id)arg1;
+ (id)noteIdentifierFromQuickNoteURL:(id)arg1;
+ (_Bool)quickNoteURLShouldShowiCloudShareSheet:(id)arg1;
+ (_Bool)quickNoteURLShouldShowShareSheet:(id)arg1;
+ (_Bool)quickNoteURLShouldShowList:(id)arg1;
+ (_Bool)isLaunchingQuickNoteViaPencil:(id)arg1;
+ (_Bool)isQuickNoteModeURL:(id)arg1;
+ (id)urlForQuickNoteWithOptions:(id)arg1;
+ (_Bool)isShowHTMLNoteURL:(id)arg1;
+ (_Bool)isShowNoteURL:(id)arg1;
+ (_Bool)isShowFolderListURL:(id)arg1;
+ (id)appURLForFolderList;
+ (id)objectIDURIRepresentationForHTMLNoteMentionedInURL:(id)arg1;
+ (id)appURLForHTMLNote:(id)arg1;
+ (id)predicateForNoteMentionedInURL:(id)arg1;
+ (id)appURLForNote:(id)arg1;
+ (long long)appURLActionFromURL:(id)arg1;
+ (id)urlForAppURLAction:(long long)arg1;

@end
