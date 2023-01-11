//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RETrainingSimulator;

@interface REHTTPDebugCoordinator : NSObject
{
    RETrainingSimulator *_simulator;
}

- (void).cxx_destruct;
- (id)_createTableWithItems:(id)arg1 itemFormatBlock:(CDUnknownBlockType)arg2 valueBlock:(CDUnknownBlockType)arg3;
- (id)_createHTMLTableFromDictionary:(id)arg1;
- (id)_createHTMLTableRowFromArray:(id)arg1 itemElementTag:(id)arg2;
- (id)_createContentItemWithTitle:(id)arg1 content:(id)arg2;
- (void)generateDiagnosticsForPaths:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_stringElementForObject:(id)arg1;
- (id)_stringForObject:(id)arg1;
- (id)_linkToPaths:(id)arg1;
- (id)_linkElementForTableItem:(id)arg1 paths:(id)arg2;
- (id)_urlFromPaths:(id)arg1;
- (id)initWithSimulator:(id)arg1;

@end
