//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXConnector : NSObject
{
}

+ (id)readFromXmlNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 drawingState:(id)arg3;
+ (void)readNonVisualConnectorProperties:(struct _xmlNode *)arg1 inNamespace:(id)arg2 connectorProperties:(id)arg3 drawingState:(id)arg4;
+ (void)readConnectionFromParent:(struct _xmlNode *)arg1 nodeName:(const char *)arg2 connection:(id)arg3 drawingState:(id)arg4;

@end

