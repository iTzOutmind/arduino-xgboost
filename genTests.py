import csv

# Dateinamen definieren
# input_csv_filename = 'datasets/gyro/xtest.csv'
# output_txt_filename = 'datasets/gyro/gyrotests.txt'
# input_csv_filename = 'datasets/mushroom/xtest.csv'
# output_txt_filename = 'datasets/mushroom/mushroomtests.txt'
# input_csv_filename = 'datasets/agmp/feature_selection/agmp_xtest_emb.csv'
# output_txt_filename = 'datasets/agmp/feature_selection/agmp_xtest_emb_test.txt'
# input_csv_filename = 'datasets/agmp/feature_selection/agmp_xtest_rfecv.csv'
# output_txt_filename = 'datasets/agmp/feature_selection/agmp_xtest_rfecv_test.txt'

# input_csv_filename = 'datasets/agmp/feature_selection/semu_xtest_emb.csv'
# output_txt_filename = 'datasets/agmp/feature_selection/semu_xtest_emb_test.txt'
input_csv_filename = 'datasets/agmp/feature_selection/semu_xtest_rfecv.csv'
output_txt_filename = 'datasets/agmp/feature_selection/semu_xtest_rfecv_test.txt'

# CSV-Datei einlesen
with open(input_csv_filename, mode='r') as csv_file:
    csv_reader = csv.reader(csv_file)
    
    # Überspringe die erste Zeile (Header)
    next(csv_reader)

    # Ausgabe in eine Textdatei schreiben
    with open(output_txt_filename, mode='w') as txt_file:
        for index, row in enumerate(csv_reader):
            # Erzeuge das gewünschte Format für jede Zeile
            formatted_line = f"double input_{index + 1}[] = {{{', '.join(row)}}};\n"
            # Schreibe die formatierte Zeile in die Textdatei
            txt_file.write(formatted_line)
            # Füge die infer-Zeile hinzu
            txt_file.write(f"infer(input_{index + 1});\n")

print(f"Die Datei wurde erfolgreich unter {output_txt_filename} gespeichert.")