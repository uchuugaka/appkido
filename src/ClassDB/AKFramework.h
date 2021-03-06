//
//  AKFramework.h
//  AppKiDo
//
//  Created by Andy Lee on 6/15/09.
//  Copyright 2009 Andy Lee. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class AKDatabase;

/*!
 * Merely a wrapper around a framework name ("Foundation", "Core Data", etc.).
 * Knowledge of what's actually in the framework (classes, functions, etc.) is
 * in AKDatabase.
 */
@interface AKFramework : NSObject
{
@private
    AKDatabase *_fwDatabase;  // weak reference
    NSString *_frameworkName;
}

- (AKDatabase *)fwDatabase;
- (void)setFWDatabase:(AKDatabase *)aDatabase;

- (NSString *)frameworkName;
- (void)setFrameworkName:(NSString *)frameworkName;

@end
