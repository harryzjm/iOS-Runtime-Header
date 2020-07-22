//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSArray;
@protocol TPArchivedLayoutStateProtocol;

@protocol TPLayoutStateProvider <NSObject>
- (unsigned long long)bodyLengthForArchivedLayoutState:(id <TPArchivedLayoutStateProtocol>)arg1;
- (NSArray *)sectionHintsForArchivedLayoutState:(id <TPArchivedLayoutStateProtocol>)arg1;
- (unsigned long long)lastPageCountForArchivedLayoutState:(id <TPArchivedLayoutStateProtocol>)arg1;
- (unsigned long long)documentPageIndexForArchivedLayoutState:(id <TPArchivedLayoutStateProtocol>)arg1;
- (unsigned long long)sectionPageIndexForArchivedLayoutState:(id <TPArchivedLayoutStateProtocol>)arg1;
- (unsigned long long)sectionIndexForArchivedLayoutState:(id <TPArchivedLayoutStateProtocol>)arg1;
@end

