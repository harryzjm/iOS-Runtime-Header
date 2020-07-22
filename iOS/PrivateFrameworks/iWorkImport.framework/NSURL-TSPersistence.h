//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (TSPersistence)
- (_Bool)tsp_getIsUbiquitousValue:(_Bool *)arg1 promised:(_Bool)arg2 error:(id *)arg3;
- (_Bool)tsp_isUbiquitous;
- (id)tsp_URLExceptPrivate;
- (id)tsp_pathExceptPrivate;
- (id)tsp_fileIdentifier;
- (id)tsp_embeddedUTI;
- (_Bool)tsp_matchesURL:(id)arg1 canCompareFileID:(_Bool)arg2;
- (_Bool)tsp_matchesURL:(id)arg1;
- (_Bool)tsp_isIWorkAVAssetURL;
@end

