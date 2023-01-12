//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (WFNaming)
+ (id)dc_queryStringWithQueryDictionary:(id)arg1 addingPercentEscapes:(_Bool)arg2;
+ (id)dc_queryStringWithQueryDictionary:(id)arg1;
+ (id)dc_dictionaryFromQueryString:(id)arg1;
+ (id)dc_queryItemsFromQueryDictionary:(id)arg1;
+ (id)dc_queryItemsFromQueryString:(id)arg1;
+ (id)wf_savedShortcutStatesURL;
+ (id)wf_shortcutsDirectoryURL;
+ (id)rootVolumeURL;
+ (id)realLibraryDirectoryURL;
+ (id)realHomeDirectoryURL;
@property(readonly, copy, nonatomic) NSString *wfName;
- (_Bool)dc_matchesHost:(id)arg1;
- (id)dc_fragmentQueryDictionary;
- (id)dc_queryDictionary;
- (id)wf_localizedDisplayName;
- (id)wf_displayPath;
- (id)wf_displayPathComponents;
- (_Bool)wf_proposedFileIsContainedByDirectoryAtURL:(id)arg1;
- (_Bool)isContainedByDirectoryAtURL:(id)arg1;
- (id)wf_relativePathFromURL:(id)arg1;
- (long long)wf_relationshipToDirectoryAtURL:(id)arg1;
- (id)volumeName;
- (id)fileSize;
- (_Bool)wf_fileHasExtendedAttribute:(id)arg1;
- (_Bool)wf_sandboxAllowsWritingFileWithAuditToken:(CDStruct_6ad76789)arg1;
- (_Bool)wf_sandboxAllowsReadingFileWithAuditToken:(CDStruct_6ad76789)arg1;
- (_Bool)wf_sandboxAllowsWritingFile;
- (_Bool)wf_sandboxAllowsReadingFile;
- (_Bool)wf_sandboxAllowsOperation:(const char *)arg1 withAuditToken:(CDStruct_6ad76789)arg2;
- (_Bool)wf_sandboxAllowsOperation:(const char *)arg1;
- (_Bool)fileIsDirectory;
- (_Bool)fileIsWritable;
- (_Bool)fileIsReadable;
- (_Bool)fileExists;
@end

